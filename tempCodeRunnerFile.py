litter = '+' if '+' in string else '-'
        string.replace(")","")
        eq,exp = [s.strip() for s in string.split("^")]
        exp = int(exp)
        l = [s.split() for s in eq.split(splitter)]
        x, y = [int(l[0][0]),int(l[1][0])]
        re