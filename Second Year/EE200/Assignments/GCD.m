function [a] = GCD(x,y,z)

%This function calculates GCD of three input numbers.

x=gcd(x,y);
z=gcd(y,z);
a=gcd(x,z);
fprintf('GCD is : %0.4f\n',a);

end