const form = document.getElementById('registrationForm');
const nameInput = document.getElementById('name');
const emailInput = document.getElementById('email');
const phoneInput = document.getElementById('phone');
const ageInput = document.getElementById('age');
const genderInputs = document.getElementsByName('gender');
const eventTypeSelect = document.getElementById('eventType');
const confirmationMessage = document.getElementById('confirmationMessage');

const errors = {
    nameError: 'Name is required.',
    emailError: 'Enter a valid email address.',
    phoneError: 'Phone number must be 10 digits.',
    ageError: 'You must be at least 18 years old.',
    genderError: 'Please select a gender.',
    eventTypeError: 'Please select an event type.'
};

function showError(inputId, errorId, message) {
    const errorElement = document.getElementById(errorId);
    if (!inputId.value.trim()) {
        errorElement.textContent = message;
        return false;
    } else {
        errorElement.textContent = '';
        return true;
    }
}

function validateName() {
    return showError(nameInput, 'nameError', errors.nameError);
}

function validateEmail() {
    const emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    if (!emailInput.value.trim() || !emailPattern.test(emailInput.value)) {
        showError(emailInput, 'emailError', errors.emailError);
        return false;
    }
    showError(emailInput, 'emailError', '');
    return true;
}

function validatePhone() {
    const phonePattern = /^[0-9]{10}$/;
    if (!phoneInput.value.trim() || !phonePattern.test(phoneInput.value)) {
        showError(phoneInput, 'phoneError', errors.phoneError);
        return false;
    }
    showError(phoneInput, 'phoneError', '');
    return true;
}

function validateAge() {
    if (!ageInput.value.trim() || ageInput.value < 18) {
        showError(ageInput, 'ageError', errors.ageError);
        return false;
    }
    showError(ageInput, 'ageError', '');
    return true;
}

function validateGender() {
    for (const genderInput of genderInputs) {
        if (genderInput.checked) {
            document.getElementById('genderError').textContent = '';
            return true;
        }
    }
    document.getElementById('genderError').textContent = errors.genderError;
    return false;
}

function validateEventType() {
    if (!eventTypeSelect.value.trim()) {
        showError(eventTypeSelect, 'eventTypeError', errors.eventTypeError);
        return false;
    }
    showError(eventTypeSelect, 'eventTypeError', '');
    return true;
}


form.addEventListener('submit', (e) => {
    e.preventDefault(); 

    const isValid =
        validateName() &&
        validateEmail() &&
        validatePhone() &&
        validateAge() &&
        validateGender() &&
        validateEventType();

    if (isValid) {
        confirmationMessage.style.display = 'block';
        form.reset();
    }
});


nameInput.addEventListener('input', validateName);
emailInput.addEventListener('input', validateEmail);
phoneInput.addEventListener('input', validatePhone);
ageInput.addEventListener('input', validateAge);
eventTypeSelect.addEventListener('change', validateEventType);
genderInputs.forEach(input => input.addEventListener('change', validateGender));
