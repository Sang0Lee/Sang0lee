function result = root(a,x,es)
% root(a,x,es)
%   a  : 제곱근을 구하려는 수
%   x  : 초기 추정치
%   es : 최대 오차 자리수
switch nargin   % 기본값 설정
    case 0      % 입력이 없을 때
        error('변환할 수를 입력해주세요.');
    case 1      % 한 개의 변수만 넣었을 때
        x = a/2;
        es = 5;
    case 2      % 두 개의 변수만 넣었을 때
        es = 5;
end
im = 1;     % 실수,허수 구분하기 위한 변수
if a ~= 0
    if a < 0
        a = -a;im = 1i;
    end
    eps = 0.5*10^(2-es);
    while(1)
        y = (x+a/x)/2;
        e = abs((y-x)/y)*100;
        x = y;
        if e < eps, break, end
    end
    r = x;
else
    r = 0;
end
r = r*im;
disp(r)
disp(e)
