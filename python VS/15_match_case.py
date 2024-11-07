x  = int(input("enter a  no "))

match x:
    case 0:
        print(" Zero ")
    case 5:
        print(" FIve ")
    case _ if x > 30:
        print("defult Value ")
    case _ if x!= 9:
        print(x,"not 90")

