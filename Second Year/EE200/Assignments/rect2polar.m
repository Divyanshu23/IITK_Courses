function [r,theta] = rect2polar(x)

%The function converts rectangular form of a complex number to the
%corresponding polar form.

r=abs(x);
theta=angle(x);

fprintf('\nr=%0.4f \t theta=%0.4f\n',r,theta);
fprintf('The polar form is %0.4f*exp(i*%0.4f)\n\n',r,theta);
end