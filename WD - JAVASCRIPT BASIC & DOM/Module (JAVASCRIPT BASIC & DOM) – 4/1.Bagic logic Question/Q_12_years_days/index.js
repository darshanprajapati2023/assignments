

document.getElementById("btn1").addEventListener("click", () => {

    const i1 = document.getElementById("years")

    function convertyearsToDays(years) {
        return years * 365.25
    }

    const yearsToDays = convertyearsToDays(Number(i1.value), 365.25)
    document.getElementById("TXT1").innerHTML = yearsToDays
})
document.getElementById("btn2").addEventListener("click", () => {

    const i2 = document.getElementById("days")

    function convertdaysToYears(days) {
        return days / 365.25
    }

    const daysToYears = convertdaysToYears(Number(i2.value), 365.25)
    document.getElementById("TXT2").innerHTML = daysToYears
})