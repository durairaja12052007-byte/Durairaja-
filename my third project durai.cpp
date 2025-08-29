// Mobile menu

const menuToggle = document.getElementById("menuToggle");

const navLinks = document.querySelector(".nav-links");

menuToggle.addEventListener("click", () => {

  navLinks.classList.toggle("show");

});

// Year update

document.getElementById("year").textContent = new Date().getFullYear();

// Contact form (demo send)

const contactForm = document.getElementById("contactForm");

const formStatus = document.getElementById("formStatus");

contactForm.addEventListener("submit", e => {

  e.preventDefault();

  formStatus.textContent = "Sending...";

  setTimeout(()=>{

    formStatus.textContent = "✅ Message sent (demo)";

    contactForm.reset();

  },1000);