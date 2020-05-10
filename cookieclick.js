let num = 0;
let passive = 0;
   
function getName(){
        let name = prompt("What is your name","");
		
		if(name != null)
        document.getElementById("space").innerHTML = name + "'s Bakery";
}

 // let cookie = document.getElementById("cookie");  Idk what this is for.

function cookieClick() { 
    num += 1;

    let numbers = document.getElementById("numbers");
    
    //upgrade level for printing
    let upgradeLevel = document.getElementById("upgradeLevel");
    
    numbers.innerHTML = num;  
	
    //automatic Granny upgrade to 2x
    if(num >= 50 ){
        num += 2;
        upgradeLevel.innerHTML = "Granny Level";
    }

    //automatic factory upgrade to 10x
    if(num >= 250) {
        num += 10;
        upgradeLevel.innerHTML = "Factory Level";
    }

    //automatic plant upgrade to 30x
    if(num >= 750) {
        num += 30;
        upgradeLevel.innerHTML = "Plant Level";
    }

    //automatic super factory upgrade to 1000x
    if(num >= 25000) {
        num += 1000;
        upgradeLevel.innerHTML = "Super-Plant Level";
    }
}

function passiveEffect(amount){  // Should add 1 cookie every second to total.
	if(num < amount)
		alert("Not enough cookies for this upgrade.");
	else{
		num = num - amount;
		document.getElementById("numbers").innerHTML = num;
		if(amount == 100)
			passive += 1;
		if(amount == 400)
			passive += 5;
		if(amount == 800)
			passive += 10;
		if(amount == 1500)
			passive += 20; 
	}
}

function cookieRate(){
	num = num + passive;
	document.getElementById("numbers").innerHTML = num;
}

function checkUpgradeLevel(){
	let upgradeLevel = document.getElementById("upgradeLevel");
	
	if(num<50)
		upgradeLevel.innerHTML = " ";
	
	//automatic Granny upgrade to 2x
    if(num >= 50 ){
        upgradeLevel.innerHTML = "Granny Level";
    }

    //automatic factory upgrade to 10x
    if(num >= 250) {
        upgradeLevel.innerHTML = "Factory Level";
    }

    //automatic plant upgrade to 30x
    if(num >= 750) {
        upgradeLevel.innerHTML = "Plant Level";
    }

    //automatic super factory upgrade to 1000x
    if(num >= 25000) {
        upgradeLevel.innerHTML = "Super-Plant Level";
    }
}

setInterval(cookieRate,1000);
setInterval(checkUpgradeLevel,1000);
