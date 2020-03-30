int reverse(int x){
    
long int reverse_x = 0, 
            _x = x;
	    
if(_x < 0) _x *= -1;
		    
    while(_x > 0){
	reverse_x *= 10;
	reverse_x = reverse_x + _x % 10;
	_x = _x / 10;
    }
							    
    if(x < 0) reverse_x *= -1;
								    
    if(reverse_x >= -2147483648 && reverse_x <= 2147483647)
	return(reverse_x);
    else return 0;
}

