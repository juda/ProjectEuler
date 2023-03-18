/ I am going to use a funny approach by creating a calendar from 1901-2000
years: 100#365 365 365 366

/ 1 Jan 1901 is Tuesday
days: (sum years)#0 0 0 0 0 1 0

get_frist_n_elements: {(y-(count x)) _ x}

reshape: {$[1=count y;enlist x;((enlist get_frist_n_elements[x;first y]),reshape[(first y)_x;1_y])]}

calendar: reshape[days;years]

months: 31 28 31 30 31 30 31 31 30 31 30 31
months_leap: 31 29 31 30 31 30 31 31 30 31 30 31

create_calendar: {$[365=count x;reshape[x;months];reshape[x;months_leap]]}

/ for each year
first_day_is_sunday: {sum first each create_calendar[x]}

sum first_day_is_sunday each calendar
