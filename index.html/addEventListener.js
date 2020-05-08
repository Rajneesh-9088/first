canvas=document.getElementById('mycanvas');
function f(){
    console.log("YOu clicked on document");
}
canvas.addEventListener('click',f);
function f2(e){
    console.log("A key is pressed",e.key);

}
document.addEventListener('keydown',f2);