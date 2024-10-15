function validateForm() {
    var name = document.getElementById("name").value;
    var email = document.getElementById("email").value;
    var message = document.getElementById("message").value;
  
    if (name == "" || email == "" || message == "") {
      alert("Please fill in all required fields.");
      return false;
    }
  
    // Add more validation checks if needed
  
    return true;
  }