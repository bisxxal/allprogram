const canvas  = document.querySelector('canvas');
ctx = canvas.getContext('2d');
let brushWidth = 3;
let isDrawing = false;
window.addEventListener('load',()=>{
    canvas.width = canvas.offsetWidth
    canvas.height = canvas.offsetHeight
})
const drawing = (e)=>{
    if(!isDrawing) return;
    ctx.lineTo(e.offsetX,e.offsetY);
    ctx.stroke();
}
const startdewing =()=>{
    isDrawing = true;
    ctx.beginPath();
    ctx.lineWidth = brushWidth;
}
canvas.addEventListener('mousedown',startdewing);
canvas.addEventListener('mousemove',drawing);
canvas.addEventListener('mouseup',()=> isDrawing = false);



