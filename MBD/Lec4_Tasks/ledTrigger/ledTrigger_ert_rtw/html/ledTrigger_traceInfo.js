function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["ledTrigger:12"] = "ledTrigger.c:60&ledTrigger.h:50";
	/* <Root>/Pulse
Generator */
	this.urlHashMap["ledTrigger:11"] = "ledTrigger.c:41,50,108&ledTrigger.h:40";
	/* <Root>/Triggered
Subsystem */
	this.urlHashMap["ledTrigger:1"] = "ledTrigger.c:52,87,112,118&ledTrigger.h:45";
	/* <Root>/led */
	this.urlHashMap["ledTrigger:9"] = "ledTrigger.c:71,78,113&ledTrigger.h:55";
	/* <S1>/Trigger */
	this.urlHashMap["ledTrigger:3"] = "ledTrigger.c:53";
	/* <S1>/Chart */
	this.urlHashMap["ledTrigger:10"] = "ledTrigger.c:59,83,114";
	/* <S2>:3 */
	this.urlHashMap["ledTrigger:10:3"] = "ledTrigger.c:68";
	/* <S2>:4 */
	this.urlHashMap["ledTrigger:10:4"] = "ledTrigger.c:72";
	/* <S2>:5 */
	this.urlHashMap["ledTrigger:10:5"] = "ledTrigger.c:79";
	/* <S2>:6 */
	this.urlHashMap["ledTrigger:10:6"] = "ledTrigger.c:73";
	/* <S2>:7 */
	this.urlHashMap["ledTrigger:10:7"] = "ledTrigger.c:76";
	/* <S2>:8 */
	this.urlHashMap["ledTrigger:10:8"] = "ledTrigger.c:84";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "ledTrigger"};
	this.sidHashMap["ledTrigger"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "ledTrigger:1"};
	this.sidHashMap["ledTrigger:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "ledTrigger:10"};
	this.sidHashMap["ledTrigger:10"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "ledTrigger:12"};
	this.sidHashMap["ledTrigger:12"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Lamp"] = {sid: "ledTrigger:5"};
	this.sidHashMap["ledTrigger:5"] = {rtwname: "<Root>/Lamp"};
	this.rtwnameHashMap["<Root>/Pulse Generator"] = {sid: "ledTrigger:11"};
	this.sidHashMap["ledTrigger:11"] = {rtwname: "<Root>/Pulse Generator"};
	this.rtwnameHashMap["<Root>/Rocker Switch"] = {sid: "ledTrigger:7"};
	this.sidHashMap["ledTrigger:7"] = {rtwname: "<Root>/Rocker Switch"};
	this.rtwnameHashMap["<Root>/Triggered Subsystem"] = {sid: "ledTrigger:1"};
	this.sidHashMap["ledTrigger:1"] = {rtwname: "<Root>/Triggered Subsystem"};
	this.rtwnameHashMap["<Root>/led"] = {sid: "ledTrigger:9"};
	this.sidHashMap["ledTrigger:9"] = {rtwname: "<Root>/led"};
	this.rtwnameHashMap["<S1>/Switch"] = {sid: "ledTrigger:2"};
	this.sidHashMap["ledTrigger:2"] = {rtwname: "<S1>/Switch"};
	this.rtwnameHashMap["<S1>/Trigger"] = {sid: "ledTrigger:3"};
	this.sidHashMap["ledTrigger:3"] = {rtwname: "<S1>/Trigger"};
	this.rtwnameHashMap["<S1>/Chart"] = {sid: "ledTrigger:10"};
	this.sidHashMap["ledTrigger:10"] = {rtwname: "<S1>/Chart"};
	this.rtwnameHashMap["<S1>/led"] = {sid: "ledTrigger:4"};
	this.sidHashMap["ledTrigger:4"] = {rtwname: "<S1>/led"};
	this.rtwnameHashMap["<S2>:3"] = {sid: "ledTrigger:10:3"};
	this.sidHashMap["ledTrigger:10:3"] = {rtwname: "<S2>:3"};
	this.rtwnameHashMap["<S2>:4"] = {sid: "ledTrigger:10:4"};
	this.sidHashMap["ledTrigger:10:4"] = {rtwname: "<S2>:4"};
	this.rtwnameHashMap["<S2>:5"] = {sid: "ledTrigger:10:5"};
	this.sidHashMap["ledTrigger:10:5"] = {rtwname: "<S2>:5"};
	this.rtwnameHashMap["<S2>:6"] = {sid: "ledTrigger:10:6"};
	this.sidHashMap["ledTrigger:10:6"] = {rtwname: "<S2>:6"};
	this.rtwnameHashMap["<S2>:7"] = {sid: "ledTrigger:10:7"};
	this.sidHashMap["ledTrigger:10:7"] = {rtwname: "<S2>:7"};
	this.rtwnameHashMap["<S2>:8"] = {sid: "ledTrigger:10:8"};
	this.sidHashMap["ledTrigger:10:8"] = {rtwname: "<S2>:8"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
