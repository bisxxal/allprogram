# s = input("enter the message")
# # print(s)
# # print(s[::-1])

# cooding = True
# if(cooding):
#     if(len(s)<=3):
#         print(s[::-1])
#     else:
#         s1 = "fhg"
#         s2 = "eet"
#         st = s1+s+s2
#         print(st[::-1])

# decoding = True

# if(decoding ):
#     if(len(s)<=3):
#         print(s[::-1])

st = input("Enter message")
words = st.split(" ")
coding = input("1 for Coding or 0 for Decoding")
coding = True if (coding=="1") else False

if(coding):
  nwords = []
  for word in words:
    if(len(word)>=3):
      r1 = "dsf"
      r2 = "jkr"
      stnew = r1+ word[1:] + word[0] + r2
      nwords.append(stnew)
    else:
      nwords.append(word[::-1])
  print(" ".join(nwords))

else:
  nwords = []
  for word in words:
    if(len(word)>=3): 
      stnew = word[3:-3]
      stnew = stnew[-1] + stnew[:-1]
      nwords.append(stnew)
    else:
      nwords.append(word[::-1])
  print(" ".join(nwords))