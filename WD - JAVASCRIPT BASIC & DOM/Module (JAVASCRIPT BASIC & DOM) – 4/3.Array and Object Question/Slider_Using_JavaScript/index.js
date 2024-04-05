const slider = document.querySelector('.slider-container');
const slides = document.querySelector('.slides');
const slideWidth = slides.querySelector('.slide').clientWidth;
let counter = 0;
let autoSlideInterval;

function nextSlide() {
    if (counter < slides.children.length - 1) {
        counter++;
    } else {
        counter = 0;
    }
    updateSlide();
}

function prevSlide() {
    if (counter > 0) {
        counter--;
    } else {
        counter = slides.children.length - 1;
    }
    updateSlide();
}

function updateSlide() {
    slides.style.transform = `translateX(-${slideWidth * counter}px)`;
}

function startAutoSlide() {
    autoSlideInterval = setInterval(nextSlide, 3000); // Change slide every 3 seconds
}

function stopAutoSlide() {
    clearInterval(autoSlideInterval);
}

// Start auto sliding when the page loads
startAutoSlide();

// Stop auto sliding when the mouse is over the slider
slider.addEventListener('mouseenter', stopAutoSlide);

// Resume auto sliding when the mouse leaves the slider
slider.addEventListener('mouseleave', startAutoSlide);