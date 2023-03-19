

/*  using case  when */

UPDATE salary
SET  sex = CASE sex
        WHEN 'm' THEN 'f'
        when 'f' then 'm'
END;