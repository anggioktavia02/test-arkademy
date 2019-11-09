        function ValidasiUsername (username) {
        var Regex = /^[a-z]{5,10}$/;
        return Regex.test (username) ;
        }
        // fungsi username
        if (ValidasiUsername ("anonyme")) {
        alert ("Username Is Valid") ;
        } else {
        alert ("Username Is Invalid")
        }

        function ValidasiPassword (password) {
            var Regex = /^[0-9]{2}["@","&"]{1}[A-Z]{4}$/;
            return Regex.test (password) ;
            }
        // fungsi password
            if (ValidasiPassword ("11@ADFG")) {
            alert ("Password Is Valid") ;
            } else {
            alert ("Password Is Invalid")
            }