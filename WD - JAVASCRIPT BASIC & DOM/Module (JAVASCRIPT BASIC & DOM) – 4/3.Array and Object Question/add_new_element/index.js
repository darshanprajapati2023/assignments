document.getElementById("BTN").addEventListener("click", () => {

    const container = document.getElementById("CONTAINER")

    const newPtag = document.createElement("p")

    newPtag.innerHTML = "This is new p tag"

    container.appendChild(newPtag)
})