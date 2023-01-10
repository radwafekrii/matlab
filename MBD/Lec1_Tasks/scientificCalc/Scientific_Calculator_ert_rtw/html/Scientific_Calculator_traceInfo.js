function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Operand_1 */
	this.urlHashMap["Scientific_Calculator:77"] = "Scientific_Calculator.c:34,42,50,58,66,74&Scientific_Calculator.h:38";
	/* <Root>/Operand_2 */
	this.urlHashMap["Scientific_Calculator:78"] = "Scientific_Calculator.c:35,43,51,59,67,75,83&Scientific_Calculator.h:39";
	/* <Root>/AND_Out */
	this.urlHashMap["Scientific_Calculator:79"] = "Scientific_Calculator.c:33&Scientific_Calculator.h:44";
	/* <Root>/NAND_Out */
	this.urlHashMap["Scientific_Calculator:83"] = "Scientific_Calculator.c:41&Scientific_Calculator.h:45";
	/* <Root>/OR_Out */
	this.urlHashMap["Scientific_Calculator:80"] = "Scientific_Calculator.c:49&Scientific_Calculator.h:46";
	/* <Root>/NOR_Out */
	this.urlHashMap["Scientific_Calculator:84"] = "Scientific_Calculator.c:57&Scientific_Calculator.h:47";
	/* <Root>/XOR_Out */
	this.urlHashMap["Scientific_Calculator:81"] = "Scientific_Calculator.c:65&Scientific_Calculator.h:48";
	/* <Root>/XNOR_Out */
	this.urlHashMap["Scientific_Calculator:85"] = "Scientific_Calculator.c:73&Scientific_Calculator.h:49";
	/* <Root>/NOT_Out */
	this.urlHashMap["Scientific_Calculator:82"] = "Scientific_Calculator.c:82&Scientific_Calculator.h:50";
	/* <S1>/Bitwise AND */
	this.urlHashMap["Scientific_Calculator:27"] = "Scientific_Calculator.c:36";
	/* <S1>/Bitwise AND1 */
	this.urlHashMap["Scientific_Calculator:28"] = "Scientific_Calculator.c:52";
	/* <S1>/Bitwise AND2 */
	this.urlHashMap["Scientific_Calculator:29"] = "Scientific_Calculator.c:44";
	/* <S1>/Bitwise AND3 */
	this.urlHashMap["Scientific_Calculator:30"] = "Scientific_Calculator.c:60";
	/* <S1>/Bitwise AND4 */
	this.urlHashMap["Scientific_Calculator:31"] = "Scientific_Calculator.c:68";
	/* <S1>/Bitwise AND5 */
	this.urlHashMap["Scientific_Calculator:32"] = "Scientific_Calculator.c:84";
	/* <S1>/Bitwise AND6 */
	this.urlHashMap["Scientific_Calculator:74"] = "Scientific_Calculator.c:76";
	/* <S1>/Bitwise AND7 */
	this.urlHashMap["Scientific_Calculator:75"] = "Scientific_Calculator.c:77";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Scientific_Calculator"};
	this.sidHashMap["Scientific_Calculator"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Scientific_Calculator:52"};
	this.sidHashMap["Scientific_Calculator:52"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Operand_1"] = {sid: "Scientific_Calculator:77"};
	this.sidHashMap["Scientific_Calculator:77"] = {rtwname: "<Root>/Operand_1"};
	this.rtwnameHashMap["<Root>/Operand_2"] = {sid: "Scientific_Calculator:78"};
	this.sidHashMap["Scientific_Calculator:78"] = {rtwname: "<Root>/Operand_2"};
	this.rtwnameHashMap["<Root>/Scientifc Calculator"] = {sid: "Scientific_Calculator:52"};
	this.sidHashMap["Scientific_Calculator:52"] = {rtwname: "<Root>/Scientifc Calculator"};
	this.rtwnameHashMap["<Root>/AND_Out"] = {sid: "Scientific_Calculator:79"};
	this.sidHashMap["Scientific_Calculator:79"] = {rtwname: "<Root>/AND_Out"};
	this.rtwnameHashMap["<Root>/NAND_Out"] = {sid: "Scientific_Calculator:83"};
	this.sidHashMap["Scientific_Calculator:83"] = {rtwname: "<Root>/NAND_Out"};
	this.rtwnameHashMap["<Root>/OR_Out"] = {sid: "Scientific_Calculator:80"};
	this.sidHashMap["Scientific_Calculator:80"] = {rtwname: "<Root>/OR_Out"};
	this.rtwnameHashMap["<Root>/NOR_Out"] = {sid: "Scientific_Calculator:84"};
	this.sidHashMap["Scientific_Calculator:84"] = {rtwname: "<Root>/NOR_Out"};
	this.rtwnameHashMap["<Root>/XOR_Out"] = {sid: "Scientific_Calculator:81"};
	this.sidHashMap["Scientific_Calculator:81"] = {rtwname: "<Root>/XOR_Out"};
	this.rtwnameHashMap["<Root>/XNOR_Out"] = {sid: "Scientific_Calculator:85"};
	this.sidHashMap["Scientific_Calculator:85"] = {rtwname: "<Root>/XNOR_Out"};
	this.rtwnameHashMap["<Root>/NOT_Out"] = {sid: "Scientific_Calculator:82"};
	this.sidHashMap["Scientific_Calculator:82"] = {rtwname: "<Root>/NOT_Out"};
	this.rtwnameHashMap["<S1>/Operand1"] = {sid: "Scientific_Calculator:53"};
	this.sidHashMap["Scientific_Calculator:53"] = {rtwname: "<S1>/Operand1"};
	this.rtwnameHashMap["<S1>/Operand2"] = {sid: "Scientific_Calculator:54"};
	this.sidHashMap["Scientific_Calculator:54"] = {rtwname: "<S1>/Operand2"};
	this.rtwnameHashMap["<S1>/Bitwise AND"] = {sid: "Scientific_Calculator:27"};
	this.sidHashMap["Scientific_Calculator:27"] = {rtwname: "<S1>/Bitwise AND"};
	this.rtwnameHashMap["<S1>/Bitwise AND1"] = {sid: "Scientific_Calculator:28"};
	this.sidHashMap["Scientific_Calculator:28"] = {rtwname: "<S1>/Bitwise AND1"};
	this.rtwnameHashMap["<S1>/Bitwise AND2"] = {sid: "Scientific_Calculator:29"};
	this.sidHashMap["Scientific_Calculator:29"] = {rtwname: "<S1>/Bitwise AND2"};
	this.rtwnameHashMap["<S1>/Bitwise AND3"] = {sid: "Scientific_Calculator:30"};
	this.sidHashMap["Scientific_Calculator:30"] = {rtwname: "<S1>/Bitwise AND3"};
	this.rtwnameHashMap["<S1>/Bitwise AND4"] = {sid: "Scientific_Calculator:31"};
	this.sidHashMap["Scientific_Calculator:31"] = {rtwname: "<S1>/Bitwise AND4"};
	this.rtwnameHashMap["<S1>/Bitwise AND5"] = {sid: "Scientific_Calculator:32"};
	this.sidHashMap["Scientific_Calculator:32"] = {rtwname: "<S1>/Bitwise AND5"};
	this.rtwnameHashMap["<S1>/Bitwise AND6"] = {sid: "Scientific_Calculator:74"};
	this.sidHashMap["Scientific_Calculator:74"] = {rtwname: "<S1>/Bitwise AND6"};
	this.rtwnameHashMap["<S1>/Bitwise AND7"] = {sid: "Scientific_Calculator:75"};
	this.sidHashMap["Scientific_Calculator:75"] = {rtwname: "<S1>/Bitwise AND7"};
	this.rtwnameHashMap["<S1>/AND"] = {sid: "Scientific_Calculator:56"};
	this.sidHashMap["Scientific_Calculator:56"] = {rtwname: "<S1>/AND"};
	this.rtwnameHashMap["<S1>/NAND"] = {sid: "Scientific_Calculator:58"};
	this.sidHashMap["Scientific_Calculator:58"] = {rtwname: "<S1>/NAND"};
	this.rtwnameHashMap["<S1>/OR"] = {sid: "Scientific_Calculator:57"};
	this.sidHashMap["Scientific_Calculator:57"] = {rtwname: "<S1>/OR"};
	this.rtwnameHashMap["<S1>/NOR"] = {sid: "Scientific_Calculator:59"};
	this.sidHashMap["Scientific_Calculator:59"] = {rtwname: "<S1>/NOR"};
	this.rtwnameHashMap["<S1>/XOR"] = {sid: "Scientific_Calculator:60"};
	this.sidHashMap["Scientific_Calculator:60"] = {rtwname: "<S1>/XOR"};
	this.rtwnameHashMap["<S1>/XNOR"] = {sid: "Scientific_Calculator:76"};
	this.sidHashMap["Scientific_Calculator:76"] = {rtwname: "<S1>/XNOR"};
	this.rtwnameHashMap["<S1>/NOT"] = {sid: "Scientific_Calculator:61"};
	this.sidHashMap["Scientific_Calculator:61"] = {rtwname: "<S1>/NOT"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
