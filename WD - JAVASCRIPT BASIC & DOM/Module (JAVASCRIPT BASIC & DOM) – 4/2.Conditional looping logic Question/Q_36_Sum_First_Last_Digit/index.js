document.getElementById("BTN").addEventListener("click", () => {

    const i = document.getElementById("num")


    function calculateSummationFirstAndLastDigit(num) {

        let numStr = num.toString();


        let firstDigit = parseInt(numStr.charAt(0));
        let lastDigit = parseInt(numStr.charAt(numStr.length - 1));


        return firstDigit + lastDigit;
    }

    SummationFirstAndLastDigit = calculateSummationFirstAndLastDigit(Number(i.value))
    document.getElementById("TXT").innerHTML = SummationFirstAndLastDigit

})