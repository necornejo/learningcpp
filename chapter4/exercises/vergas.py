"""lista=[]
for x in range(0,100):
    lista.append(x)

while len(lista)>1:
    hol=len(lista)/2
    ques=raw_input("Tu numero es menor, mayor o igual a "+str(hol)+"?")
    if ques=="menor":
        for h in range(hol,len(lista)-1):
            lista.pop(lista[h])
    elif ques=="mayor":
        for h in range(0,hol-1):
            lista.pop(lista[h])
    elif ques=="igual":
        lista=[hol]

print "Tu numero es:",lista[hol]"""

lista=[1,5,8,3,5,3,6,4]
print lista[0,4]
gfg
