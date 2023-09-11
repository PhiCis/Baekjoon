ans = 0
for i in range(8):
	a = input()
	ans += 1*(a.count("P")-a.count("p")) + 3*(a.count("N")-a.count("n")+a.count("B")-a.count("b"))+5*(a.count("R")-a.count("r"))+9*(a.count("Q")-a.count("q"))
print(ans)