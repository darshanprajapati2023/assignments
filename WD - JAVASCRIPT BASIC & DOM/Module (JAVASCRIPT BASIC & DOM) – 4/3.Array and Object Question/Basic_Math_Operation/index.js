document.getElementById("BTN1").addEventListener("click", () => {


    const i1 = document.getElementById("num1")
    const i2 = document.getElementById("num2")


    function calcadd(num1, num2) {
        return num1 + num2;
    }

    add = calcadd(Number(i1.value), Number(i2.value))
    document.getElementById("TXT").innerHTML = "Answer is:" + add
    document.getElementById("TXT").style.color = getColor(add);

})
document.getElementById("BTN2").addEventListener("click", () => {


    const i1 = document.getElementById("num1")
    const i2 = document.getElementById("num2")


    function calcsubtract(num1, num2) {
        return num1 - num2;
    }

    substract = calcsubtract(Number(i1.value), Number(i2.value))
    document.getElementById("TXT").innerHTML = "Answer is:" + substract
    document.getElementById("TXT").style.color = getColor(substract);

})

document.getElementById("BTN3").addEventListener("click", () => {


    const i1 = document.getElementById("num1")
    const i2 = document.getElementById("num2")


    function clacmultiply(num1, num2) {
        return num1 * num2;
    }

    multiply = clacmultiply(Number(i1.value), Number(i2.value))
    document.getElementById("TXT").innerHTML = "Answer is:" + multiply
    document.getElementById("TXT").style.color = getColor(multiply);


})

document.getElementById("BTN4").addEventListener("click", () => {


    const i1 = document.getElementById("num1")
    const i2 = document.getElementById("num2")


    function calcdivide(num1, num2) {
        if (num2 !== 0) {
            return num1 / num2;
        } else {
            return "Cannot divide by zero";
        }
    }

    divide = calcdivide(Number(i1.value), Number(i2.value))
    document.getElementById("TXT").innerHTML = "Answer is:" + divide
    document.getElementById("TXT").style.color = getColor(divide);


})

document.getElementById("BTN5").addEventListener("click", () => {


    const i1 = document.getElementById("num1")
    const i2 = document.getElementById("num2")


    function calcmodulo(num1, num2) {
        return num1 % num2;
    }

    modulo = calcmodulo(Number(i1.value), Number(i2.value))
    document.getElementById("TXT").innerHTML = "Answer is:" + modulo
    document.getElementById("TXT").style.color = getColor(modulo);


})

function getColor(value) {
    if (value >= 40) {
        return "blue";
    } else {
        return "blue";
    }
}