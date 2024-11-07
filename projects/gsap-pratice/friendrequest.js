var btn = document.querySelector("button");
var stg = document.querySelector("h4");
var flag = 0;
btn.addEventListener('click',()=>{

    if(flag == 0){
    stg.innerHTML = "You are friends now!"
    btn.innerHTML = "Remove"
    stg.style.color="green";
    btn.style.backgroundColor="white"
    flag = 1;
    }
    else{
        stg.innerHTML = "strenger"
        btn.innerHTML = "Add friend"
        stg.style.color="red";
        btn.style.backgroundColor="rgb(0, 180, 245)"
        flag = 0;
    }

})