# COIN 

developed by **Luis Garcia**<br>
id: 201612511<br>
email: luisforreverr@gmail.com<br>
blog: Under construction  

## SPECIFICATIONS

1. **Currency Name**
	- POCOINS

2. **Amount**
	- 100 Pocoins :panda_face:
		-This currency system is integer that means there are no decimals


3. **Users and coins division**
	- ***Users***
		- Thor :arrow_right: 10 Pocoins :panda_face:
		- Dante :arrow_right: 10 Pocoins :panda_face:
		- Kratos :arrow_right: 10 Pocoins :panda_face:
		- Miguel :arrow_right: 10 Pocoins :panda_face:
	- ***Coin purse***
		- BigBank :arrow_right: 60  Pocoins :panda_face:

4. **Transfers**
	- User to User
	- BigBank to User 

5. **Details of methods**
	- Moneda = (create, showOwner, transferToUser, transferBetweenUsers)<br>
	- Operaciones: <br>
		- create(String name, int value)<br>
	- parameters: name dont't be null, value do be mayor of zero<br> 
	- function: show a object with name and value 
		- showOwner(array,String): show Owners<br>
	- parameters: array dont be null<br>
		- show a list whit the owners and the respective tokens<br>
	- transferToUser(quantity, owner, token ):<br>
	- quentity: quentity of tokens owner's have<br>
	- owner: name of owner of tokens<br>
	- token: name of token<br>
