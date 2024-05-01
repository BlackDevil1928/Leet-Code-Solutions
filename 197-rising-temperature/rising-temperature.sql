
select distinct id
from Weather
where prior temperature < temperature
connect by prior recordDate +1 = recordDate