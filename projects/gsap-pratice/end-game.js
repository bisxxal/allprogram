//iie

(function (x, y, z) {
  console.log("  Immediately Invoked Function Expression ");
  console.log(x);
  console.log(y);
  console.log(z);
})(32, 56, 21);

//       PROMICES IN JS

var ans = new Promise((res, rej) => {
  if (false) return res();
  else return rej();
});

ans
  .then(() => {
    console.log("resolved");
  })
  .catch(() => {
    console.log("rejected ");
  });

// user will ask for a nuumber betwween 0 to 9 and if the number below 5 resolve if not reject

var find = new Promise((res, rej) => {
  var n = Math.floor(Math.random() * 10);
console.log(n);
  if (n < 5) return res();
  else return rej();
});

find
.then(()=>{
    console.log("below");
})
.catch(()=>{
    console.log("hyjmhjgrater ");
})


//question 2 

// 1st come to home
// 2nd open the door
// 3rd eat burgger
// 4th turn on chorm
// 5th Slep

var work = new Promise((res , rej)=>{
    return res("come to home");

})

var w2 = work.then((data)=>{
    console.log(data);

    return new Promise((res ,rej)=>{
        return  res("open the door")
    })

})
 
var w3 = w2.then((data)=>{
        console.log(data);

        return new Promise((res , rej)=>{
            return res("eat buurgger ");
        });
});
var w4 = w3.then((data)=>{
        console.log(data);

        return new Promise((res , rej)=>{
            return res("turn on chorm ");
        });
});
var w5 = w4.then((data)=>{
        console.log(data);

        return new Promise((res , rej)=>{
            return res("sleap");
        });
});

  w5.then((data)=>{
        console.log(data);
 
});


//using fethch

async function myFun(){
    let raw  = await fetch(`https://randomuser.me/api/`);
    let ans =  await raw.json();
    console.log(ans)
}

myFun();