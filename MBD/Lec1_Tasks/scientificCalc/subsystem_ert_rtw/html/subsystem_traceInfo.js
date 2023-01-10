function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Operand1 */
	this.urlHashMap["subsystem:1"] = "subsystem.c:33,40,48,55,63,70&subsystem.h:38";
	/* <Root>/Operand2 */
	this.urlHashMap["subsystem:2"] = "subsystem.c:34,41,49,56,64,71,79&subsystem.h:39";
	/* <Root>/AND */
	this.urlHashMap["subsystem:11"] = "subsystem.c:32&subsystem.h:44";
	/* <Root>/NAND */
	this.urlHashMap["subsystem:12"] = "subsystem.c:39&subsystem.h:45";
	/* <Root>/OR */
	this.urlHashMap["subsystem:13"] = "subsystem.c:47&subsystem.h:46";
	/* <Root>/NOR */
	this.urlHashMap["subsystem:14"] = "subsystem.c:54&subsystem.h:47";
	/* <Root>/XOR */
	this.urlHashMap["subsystem:15"] = "subsystem.c:62&subsystem.h:48";
	/* <Root>/XNOR */
	this.urlHashMap["subsystem:16"] = "subsystem.c:69&subsystem.h:49";
	/* <Root>/NOT */
	this.urlHashMap["subsystem:17"] = "subsystem.c:78&subsystem.h:50";
	/* <S1>/Bitwise AND */
	this.urlHashMap["subsystem:3"] = "subsystem.c:35";
	/* <S1>/Bitwise AND1 */
	this.urlHashMap["subsystem:4"] = "subsystem.c:50";
	/* <S1>/Bitwise AND2 */
	this.urlHashMap["subsystem:5"] = "subsystem.c:42";
	/* <S1>/Bitwise AND3 */
	this.urlHashMap["subsystem:6"] = "subsystem.c:57";
	/* <S1>/Bitwise AND4 */
	this.urlHashMap["subsystem:7"] = "subsystem.c:65";
	/* <S1>/Bitwise AND5 */
	this.urlHashMap["subsystem:8"] = "subsystem.c:80";
	/* <S1>/Bitwise AND6 */
	this.urlHashMap["subsystem:9"] = "subsystem.c:72";
	/* <S1>/Bitwise AND7 */
	this.urlHashMap["subsystem:10"] = "subsystem.c:73";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "subsystem"};
	this.sidHashMap["subsystem"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "subsystem:18"};
	this.sidHashMap["subsystem:18"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Operand1"] = {sid: "subsystem:1"};
	this.sidHashMap["subsystem:1"] = {rtwname: "<Root>/Operand1"};
	this.rtwnameHashMap["<Root>/Operand2"] = {sid: "subsystem:2"};
	this.sidHashMap["subsystem:2"] = {rtwname: "<Root>/Operand2"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "subsystem:18"};
	this.sidHashMap["subsystem:18"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/AND"] = {sid: "subsystem:11"};
	this.sidHashMap["subsystem:11"] = {rtwname: "<Root>/AND"};
	this.rtwnameHashMap["<Root>/NAND"] = {sid: "subsystem:12"};
	this.sidHashMap["subsystem:12"] = {rtwname: "<Root>/NAND"};
	this.rtwnameHashMap["<Root>/OR"] = {sid: "subsystem:13"};
	this.sidHashMap["subsystem:13"] = {rtwname: "<Root>/OR"};
	this.rtwnameHashMap["<Root>/NOR"] = {sid: "subsystem:14"};
	this.sidHashMap["subsystem:14"] = {rtwname: "<Root>/NOR"};
	this.rtwnameHashMap["<Root>/XOR"] = {sid: "subsystem:15"};
	this.sidHashMap["subsystem:15"] = {rtwname: "<Root>/XOR"};
	this.rtwnameHashMap["<Root>/XNOR"] = {sid: "subsystem:16"};
	this.sidHashMap["subsystem:16"] = {rtwname: "<Root>/XNOR"};
	this.rtwnameHashMap["<Root>/NOT"] = {sid: "subsystem:17"};
	this.sidHashMap["subsystem:17"] = {rtwname: "<Root>/NOT"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "subsystem:19"};
	this.sidHashMap["subsystem:19"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/In2"] = {sid: "subsystem:20"};
	this.sidHashMap["subsystem:20"] = {rtwname: "<S1>/In2"};
	this.rtwnameHashMap["<S1>/Bitwise AND"] = {sid: "subsystem:3"};
	this.sidHashMap["subsystem:3"] = {rtwname: "<S1>/Bitwise AND"};
	this.rtwnameHashMap["<S1>/Bitwise AND1"] = {sid: "subsystem:4"};
	this.sidHashMap["subsystem:4"] = {rtwname: "<S1>/Bitwise AND1"};
	this.rtwnameHashMap["<S1>/Bitwise AND2"] = {sid: "subsystem:5"};
	this.sidHashMap["subsystem:5"] = {rtwname: "<S1>/Bitwise AND2"};
	this.rtwnameHashMap["<S1>/Bitwise AND3"] = {sid: "subsystem:6"};
	this.sidHashMap["subsystem:6"] = {rtwname: "<S1>/Bitwise AND3"};
	this.rtwnameHashMap["<S1>/Bitwise AND4"] = {sid: "subsystem:7"};
	this.sidHashMap["subsystem:7"] = {rtwname: "<S1>/Bitwise AND4"};
	this.rtwnameHashMap["<S1>/Bitwise AND5"] = {sid: "subsystem:8"};
	this.sidHashMap["subsystem:8"] = {rtwname: "<S1>/Bitwise AND5"};
	this.rtwnameHashMap["<S1>/Bitwise AND6"] = {sid: "subsystem:9"};
	this.sidHashMap["subsystem:9"] = {rtwname: "<S1>/Bitwise AND6"};
	this.rtwnameHashMap["<S1>/Bitwise AND7"] = {sid: "subsystem:10"};
	this.sidHashMap["subsystem:10"] = {rtwname: "<S1>/Bitwise AND7"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "subsystem:21"};
	this.sidHashMap["subsystem:21"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S1>/Out2"] = {sid: "subsystem:22"};
	this.sidHashMap["subsystem:22"] = {rtwname: "<S1>/Out2"};
	this.rtwnameHashMap["<S1>/Out3"] = {sid: "subsystem:23"};
	this.sidHashMap["subsystem:23"] = {rtwname: "<S1>/Out3"};
	this.rtwnameHashMap["<S1>/Out4"] = {sid: "subsystem:24"};
	this.sidHashMap["subsystem:24"] = {rtwname: "<S1>/Out4"};
	this.rtwnameHashMap["<S1>/Out5"] = {sid: "subsystem:25"};
	this.sidHashMap["subsystem:25"] = {rtwname: "<S1>/Out5"};
	this.rtwnameHashMap["<S1>/Out6"] = {sid: "subsystem:26"};
	this.sidHashMap["subsystem:26"] = {rtwname: "<S1>/Out6"};
	this.rtwnameHashMap["<S1>/Out7"] = {sid: "subsystem:27"};
	this.sidHashMap["subsystem:27"] = {rtwname: "<S1>/Out7"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
