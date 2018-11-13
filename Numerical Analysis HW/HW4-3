function x = GaussSeidel( A,b,es,maxit )

if nargin<2, error('at least 2 input arguments required'),end
if nargin<4 | isempty(maxit),maxit=50;end
if nargin<3 | isempty(es),es=0.00001;end
[m,n] = size(A);
if m~=n, error('Matrix A must be square'); end
C = A;
for i = 1:n
    C(i,i) = 0;
    x(i) = 0;
end
x = x';
for i = 1:n
    C(i,i:n) = C(i,i:n)/A(i,i); 
end
for i = 1:n
    d(i) = b(i)/A(i,i);
end
iter=0;
while(1)
    xold = x;
    for i = 1:n
        x(i) = d(i)-C(i,:)*x;   
        % x행렬의 x(i)가 업데이트되고 다음 x(i)를 구할 때 
        % 그 전 x(i)가 바로바로 적용됨을 볼 수 있다. 
        if x(i) ~= 0
            ea(i) = abs((x(i) - xold(i))/x(i))*100;
        end
    end
    iter = iter + 1;
    if max(ea) <= es | iter >= maxit, break, end
end
end
