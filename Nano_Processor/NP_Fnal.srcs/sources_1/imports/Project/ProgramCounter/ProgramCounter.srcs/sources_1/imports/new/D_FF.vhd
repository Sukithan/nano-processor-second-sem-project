
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity D_FF is
    Port ( D : in STD_LOGIC;
           Res : in STD_LOGIC;
           Clk : in STD_LOGIC;
           Q : out STD_LOGIC
           );
end D_FF;

architecture Behavioral of D_FF is

begin
    process (Clk,Res) 
    begin
        if Res = '1' then
            Q <= '0';
        elsif (rising_edge(Clk)) then 
            Q <= D; 
        end if; 
    end process; 


end Behavioral;
