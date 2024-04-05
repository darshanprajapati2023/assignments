document.getElementById("BTN").addEventListener("click", () => {

    const i = document.getElementById("num")

    function calcreverseNumber(num) {
        let reversed = 0;
        while (num > 0) {
            reversed = reversed * 10 + (num % 10);
            num = Math.floor(num / 10);
        }
        return reversed;
    }

    const reverseNumber = calcreverseNumber(Number(i.value))
    document.getElementById("TXT").innerHTML = reverseNumber

})