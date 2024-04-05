document.getElementById("BTN").addEventListener("click", () => {

    const i = document.getElementById("num")

    function digitSummation(num) {

        let sum = 0;
        let numString = Math.abs(num).toString();
        for (let i = 0; i < numString.length; i++) {
            sum += parseInt(numString[i]);
        }
        return sum;
    }

    const Summation = digitSummation(Number(i.value))
    document.getElementById("TXT").innerHTML = Summation


})