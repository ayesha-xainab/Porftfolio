//To change the theme of the website
document.addEventListener('DOMContentLoaded', () => {
    const toggle = document.getElementById('dark-mode-toggle');
    const body = document.body;

    toggle.addEventListener('change', () => {
        if (toggle.checked) {
            body.classList.add('dark-theme');
            body.classList.remove('light-theme');
        } else {
            body.classList.add('light-theme');
            body.classList.remove('dark-theme');
        }
    });
   // Setting initial theme based on user preference or system preference
   if (window.matchMedia && window.matchMedia('(prefers-color-scheme: dark)').matches) {
    toggle.checked = true;
    body.classList.add('dark-theme');
} else {
    toggle.checked = false;
    body.classList.add('light-theme');
}
});

//Contact Me section Email validation
function validateEmail(email) {
    const emailRegex = /^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/;
    return emailRegex.test(email);
  }
//Form submission
  function submitForm() {
    const emailInput = document.getElementById("email");
    const email = emailInput.value.trim();
    if (!validateEmail(email)) {
      alert("Invalid email address. Please enter a valid email address.");
      return false;
    }
    alert("Message sent successfully!");
    return true;
  }
