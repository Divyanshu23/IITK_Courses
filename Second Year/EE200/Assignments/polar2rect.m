function [x,y] = polar2rect(z)

%The function converts polar form of a complex number to the
%corresponding rectangular(cartesian) form.

x=real(z);
y=imag(z);

fprintf('\nx=%0.4f \t y=%0.4f\n',x,y);
fprintf('The rectangular(cartesian) form is %0.4f + j*%0.4f\n\n',x,y);
end