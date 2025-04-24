function view(){
    if(document.getElementById("Hidden Image").style.display == "block"){
      document.getElementById("Hidden image").style.display = "none"
      document.getElementById("shw").innerHTML = "Show More"
    }else{
      document.getElementById("Hidden image").style.display = "block"
      document.getElementById("shw").innerHTML = "Show Less"
    }
}
function change(){
    if (counter < images.length){
       document.getElementById("img").src = images[counter] 
       counter += 1
    }else{
        counter = 0
        document.getElementById("img").src = images[counter]
    }

}