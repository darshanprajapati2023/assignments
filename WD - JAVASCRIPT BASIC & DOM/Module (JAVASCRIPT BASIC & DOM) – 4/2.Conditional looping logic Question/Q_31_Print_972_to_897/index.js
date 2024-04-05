document.getElementById("BTN").addEventListener("click", () => {

    for (let i = 972; i >= 897; i--) {
        const newPtag = document.createElement('p')
        newPtag.innerHTML = `${i}`
        document.getElementById("CONTAINER").appendChild(newPtag)
    }


})