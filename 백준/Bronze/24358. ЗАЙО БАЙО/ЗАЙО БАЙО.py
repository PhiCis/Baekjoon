import datetime
x, n=map(int, input().split())
d, m, g=map(int, input().split())
a=datetime.datetime(year=g, month=m, day=d)
a=a+datetime.timedelta(days=x*2*n-n-1)
print(a.day, a.month, a.year)