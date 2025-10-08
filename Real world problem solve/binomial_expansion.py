class Binomial_Expansion:
    def __init__(self,x:int,y:int,exp:int,has_x:bool=True,has_y:bool=True) -> None:
        self.x = x
        self.y = y
        self.exp = exp
        self.has_x = has_x
        self.has_y = has_y
        
    #Format Loader
    @classmethod
    def load(cls, string:str):
        import re
        pattern = r"[+-]?\d+"
        # Load from (ax+by)^c format and returns a,b,c with setting the x,y,exp of self
        try:    
            has_x = "x" in string
            has_y = "y" in string
            alls = [0,0,0]
            for i,s in enumerate(re.findall(pattern,string)):
                #Get the digits with their signs from the format
                alls[i] = int(s)
                
            return Binomial_Expansion(*alls,has_x,has_y)
        
        except (ValueError, IndexError) as e:
            raise TypeError("Enter correct format") from e
        
    @property
    def result(self) -> str:
        #Expansion result
        exp = ""
        for i in range(self.exp+1):
            exp+= f"{self.expanded_at_position(y_pow=i)}"
            if i != self.exp and not '-' in self.expanded_at_position(y_pow=i+1):
                exp += " + "
        return exp.replace("-"," - ")
    
    #Validator Decorator
    def validator_x_y_pows(func):
        #Can take x,y pows as input but not both. X_pow will get priority then
        def inner(self, x_pow:int=0, y_pow:int|None=None):
            if x_pow<0 or (y_pow is not None and y_pow<0): raise ValueError("Can't be neg value")
            if x_pow:
                y_pow = self.exp-x_pow
                return func(self, x_pow, y_pow)
            elif y_pow is not None:
                x_pow = self.exp - y_pow
                return func(self, x_pow, y_pow)
            else:
                raise KeyError("Enter Fields")
                
        return inner
    
    @validator_x_y_pows
    def expanded_at_position(self,*args) -> str:
       #First arg[0] is x_pow , second arg[1] is y_pow
       return f"{self.coefficient(*args)} {f'x^{args[0]} ' if self.has_x and args[0]!=0 else ''}{f'y^{args[1]}' if self.has_y and args[1] != 0 else ''}"
       
    @validator_x_y_pows
    def coefficient(self,*args) -> int:
        #First arg[0] is x_pow , second arg[1] is y_pow
        return self.combination(self.exp,args[1])*(self.x**args[0])*(self.y**args[1])
    
    def combination(self,n:int,r:int) -> int:
        #returns nCr
        return self.factorial(n)//(self.factorial(n-r)*self.factorial(r))
    
    def factorial(self,n:int) -> int:
        #returns n!
        if n==1 or n==0: return 1
        return n*self.factorial(n-1)
    
    def __str__(self) -> str:
        return f"Given : ({self.x}{'x' if self.has_x else ""} {'+' if self.y>0 else '-'} {abs(self.y)}{'y' if self.has_y else ""})^{self.exp}\n"
    
class BinomialCLI:
    #Subclass of Binomial_Expansion with CLI features
    def __init__(self) -> None:
        self.binomial = None
    
    def run(self):
        while True:
            if self.binomial: print(f"{self.binomial}")
            choice = input("Enter choice: ")
            if choice == "4":
                break
            self.handle_choice(choice)
            print("\n")
            
    def prompt(self):
        print("""
            --------------------------------------
            1. Load Binomial from Format (ax+by)^c
            2. Show Binomial Expansion
            3. Get Binomial Expansion at a point
            4. Exit
            --------------------------------------
            """)
    
    def handle_choice(self, choice: str):
        if choice == "1":
            try:
                expr = input("Enter the Binomial Expression: ")
                self.binomial = Binomial_Expansion.load(expr)
                print(f"Loaded: {self.binomial}")
            except:
                print("Format error. Try again")
                self.handle_choice("1")
                
        elif not self.binomial:
            print("First load a Binomial Expression")
        elif choice == "2":
            print(self.binomial.result)
        elif choice == "3":
            b = input("1. Get from power of x?\n2. Get from power of y\nChoice: ")
            try:
                if b == "1":
                    x_pow = int(input("Enter the power of x: "))
                    print(self.binomial.expanded_at_position(x_pow=x_pow))
                elif b == "2":
                    y_pow = int(input("Enter the power of y: "))
                    print(self.binomial.expanded_at_position(y_pow=y_pow))
            except ValueError:
                print("Enter a valid number")
                self.handle_choice("3")

if __name__ == "__main__":
    cli = BinomialCLI()
    cli.prompt()
    cli.run()