import requests as r

responce = r.get('https://chat.openai.com/')

# print(responce.text)

with open ('index.html' , 'w') as f:
    f.write(responce.text)

    