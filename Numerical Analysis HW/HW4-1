function xnew = Jacobi( A,b,es,maxit )

if nargin<2, error('at least 2 input arguments required'),end
if nargin<4 | isempty(maxit),maxit=50;end
if nargin<3 | isempty(es),es=0.00001;end
[m,n] = size(A);
if m~=n, error('Matrix A must be square'); end
C = A;
for i = 1:n
    C(i,i) = 0;
    xold(i) = 0;
    xnew(i) = 0;
end
xold = xold';   %한 타임이 끝날때 마다 저장할 x행렬을 따로 선언
xnew = xnew';
for i = 1:n
    C(i,i:n) = C(i,i:n)/A(i,i); 
end
for i = 1:n
    d(i) = b(i)/A(i,i);
end
iter=0;
while(1)
    xold = xnew;
    for i = 1:n
        xnew(i) = d(i)-C(i,:)*xold;   
    end
    for i = 1:n
        if xnew(i) ~= 0
            ea(i) = abs((xnew(i) - xold(i))/xnew(i))*100;
        end
    end
    iter = iter + 1;
    if max(ea) <= es | iter >= maxit, break, end
end
end
