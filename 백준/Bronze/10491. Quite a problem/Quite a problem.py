while True:
    try:
        a = input()
        ans = False
        for i in range(len(a)-6):
            if a[i].lower() == 'p':
                if a[i+1].lower() == 'r':
                    if a[i+2].lower() == 'o':
                        if a[i+3].lower() == 'b':
                            if a[i+4].lower() == 'l':
                                if a[i+5].lower() == 'e':
                                    if a[i+6].lower() == 'm':
                                        ans = True
        if ans:
            print("yes")
        else:
            print("no")
    except EOFError:
        break