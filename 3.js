<script language="text/javascript">

function input(number) {
    
    document.write(number + ", ")
}

number = [0,1,2,3,4,5,6,7,8,9];

function validasi-input(form) {
    pola_array=/^[0-9]{3,10}$/;
    if (!pola_array.test(form.array.value)) {
        alert ("Minimal Array lengt is 3!");
        form.array.focus();
        return (false);
    }
    return (true);
}

function validasi() {
    var number = document.getElementById("number").value; 
    if (number !="") {
        return true;
    } else {
        alert ("Parameter should be an array")
    }
}
</script>