let images= [ "https://t3.ftcdn.net/jpg/04/21/85/20/360_F_421852062_oLJjfT88cczyu3u28Qy3M2V8xmO8L770.jpg","https://elenasquareeyes.com/wp-content/uploads/2021/04/kaz-brekker.jpg"

]
let counter=0
function change(){
    if(counter< images.length){
    document.getElementById("img"). src= images[counter]}else{
        counter=0
        document.getElementById("img").src=images[counter]
        counter+=1
    }
}
function hello(){
    document.getElementById("title").innerHTML=" Hello world!"
    
}
function hover(){
    document. getElementById ("img").src="https://www.hindustantimes.com/ht-img/img/2024/12/21/1600x900/jjk_vfilm_1734749525906_1734749539867.jpg"
    }

function leave(){
    document. getElementById ("img").src="https://www.hindustantimes.com/ht-img/img/2024/12/21/1600x900/jjk_vfilm_1734749525906_1734749539867.jpg"
    
    }
    function hidden(){
        document.getElementById ("yes").style.display="block"
    }