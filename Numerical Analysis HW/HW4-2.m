function [ J, f] = func(x)
f1 = @(a,b) a^2+a*b-10;
f2 = @(a,b) b^2+3*a*b^2-57;
df1da = @(a,b) 2*a+b;
df1db = @(a,b) a;
df2da = @(a,b) 3*b^2;
df2db = @(a,b) 1+6*a*b;

J = [ df1da(x(1),x(2)) df1db(x(1),x(2));...
    df2da(x(1),x(2)) df2db(x(1),x(2))]
    
f = [f1(x(1),x(2));f2(x(1),x(2))]

end

