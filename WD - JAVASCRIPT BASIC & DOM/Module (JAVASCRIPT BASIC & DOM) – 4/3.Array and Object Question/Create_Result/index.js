document.getElementById("BTN").addEventListener("click", () => {
    const i1 = parseInt(document.getElementById("num1").value);
    const i2 = parseInt(document.getElementById("num2").value);
    const i3 = parseInt(document.getElementById("num3").value);
    const i4 = parseInt(document.getElementById("num4").value);
    const i5 = parseInt(document.getElementById("num5").value);
    const i6 = parseInt(document.getElementById("num6").value);
    const i7 = parseInt(document.getElementById("num7").value);

    const totalMarks = i1 + i2 + i3 + i4 + i5 + i6 + i7;
    const percentage = (totalMarks / 350) * 100;

    document.getElementById("TXT1").innerHTML = "Total is: " + totalMarks + "/350";
    document.getElementById("TXT1").style.color = getColor(totalMarks);
    document.getElementById("TXT2").innerHTML = "Percentage is: " + percentage.toFixed(2) + "%";
    document.getElementById("TXT2").style.color = getColor(percentage);
});

function getColor(value) {
    if (value >= 40) {
        return "green";
    } else if (value >= 20) {
        return "orange";
    } else {
        return "red";
    }
}