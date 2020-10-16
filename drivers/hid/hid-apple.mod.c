#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x2f357d74, "hid_unregister_driver" },
	{ 0x84ead130, "__hid_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xf4e9c026, "hid_hw_start" },
	{ 0xa219a88d, "hid_open_report" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x38ea3b28, "input_event" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000005ACp00000304");
MODULE_ALIAS("hid:b0003g*v000005ACp0000020E");
MODULE_ALIAS("hid:b0003g*v000005ACp0000020F");
MODULE_ALIAS("hid:b0003g*v000005ACp00000214");
MODULE_ALIAS("hid:b0003g*v000005ACp00000215");
MODULE_ALIAS("hid:b0003g*v000005ACp00000216");
MODULE_ALIAS("hid:b0003g*v000005ACp00000217");
MODULE_ALIAS("hid:b0003g*v000005ACp00000218");
MODULE_ALIAS("hid:b0003g*v000005ACp00000219");
MODULE_ALIAS("hid:b0003g*v000005ACp0000021A");
MODULE_ALIAS("hid:b0003g*v000005ACp0000021B");
MODULE_ALIAS("hid:b0003g*v000005ACp0000021C");
MODULE_ALIAS("hid:b0003g*v000005ACp0000021D");
MODULE_ALIAS("hid:b0003g*v000005ACp0000021E");
MODULE_ALIAS("hid:b0003g*v000005ACp0000021F");
MODULE_ALIAS("hid:b0003g*v000005ACp00000220");
MODULE_ALIAS("hid:b0003g*v000005ACp00000221");
MODULE_ALIAS("hid:b0003g*v000005ACp00000222");
MODULE_ALIAS("hid:b0003g*v000005ACp00000229");
MODULE_ALIAS("hid:b0003g*v000005ACp0000022A");
MODULE_ALIAS("hid:b0003g*v000005ACp0000022B");
MODULE_ALIAS("hid:b0003g*v000005ACp0000024F");
MODULE_ALIAS("hid:b0003g*v000005ACp00000250");
MODULE_ALIAS("hid:b0003g*v000005ACp00000251");
MODULE_ALIAS("hid:b0005g*v000005ACp0000022C");
MODULE_ALIAS("hid:b0005g*v000005ACp0000022D");
MODULE_ALIAS("hid:b0005g*v000005ACp00000256");
MODULE_ALIAS("hid:b0005g*v000005ACp00000255");
MODULE_ALIAS("hid:b0005g*v000005ACp00000257");
MODULE_ALIAS("hid:b0005g*v000005ACp0000022E");
MODULE_ALIAS("hid:b0003g*v000005ACp00000267");
MODULE_ALIAS("hid:b0005g*v0000004Cp00000267");
MODULE_ALIAS("hid:b0003g*v000005ACp0000026C");
MODULE_ALIAS("hid:b0005g*v0000004Cp0000026C");
MODULE_ALIAS("hid:b0003g*v000005ACp00000223");
MODULE_ALIAS("hid:b0003g*v000005ACp00000224");
MODULE_ALIAS("hid:b0003g*v000005ACp00000225");
MODULE_ALIAS("hid:b0003g*v000005ACp00000230");
MODULE_ALIAS("hid:b0003g*v000005ACp00000231");
MODULE_ALIAS("hid:b0003g*v000005ACp00000232");
MODULE_ALIAS("hid:b0003g*v000005ACp00000236");
MODULE_ALIAS("hid:b0003g*v000005ACp00000237");
MODULE_ALIAS("hid:b0003g*v000005ACp00000238");
MODULE_ALIAS("hid:b0003g*v000005ACp0000023F");
MODULE_ALIAS("hid:b0003g*v000005ACp00000240");
MODULE_ALIAS("hid:b0003g*v000005ACp00000241");
MODULE_ALIAS("hid:b0003g*v000005ACp00000242");
MODULE_ALIAS("hid:b0003g*v000005ACp00000243");
MODULE_ALIAS("hid:b0003g*v000005ACp00000244");
MODULE_ALIAS("hid:b0003g*v000005ACp00000245");
MODULE_ALIAS("hid:b0003g*v000005ACp00000246");
MODULE_ALIAS("hid:b0003g*v000005ACp00000247");
MODULE_ALIAS("hid:b0003g*v000005ACp0000024C");
MODULE_ALIAS("hid:b0003g*v000005ACp0000024D");
MODULE_ALIAS("hid:b0003g*v000005ACp0000024E");
MODULE_ALIAS("hid:b0003g*v000005ACp00000249");
MODULE_ALIAS("hid:b0003g*v000005ACp0000024A");
MODULE_ALIAS("hid:b0003g*v000005ACp0000024B");
MODULE_ALIAS("hid:b0003g*v000005ACp00000252");
MODULE_ALIAS("hid:b0003g*v000005ACp00000253");
MODULE_ALIAS("hid:b0003g*v000005ACp00000254");
MODULE_ALIAS("hid:b0003g*v000005ACp00000262");
MODULE_ALIAS("hid:b0003g*v000005ACp00000263");
MODULE_ALIAS("hid:b0003g*v000005ACp00000264");
MODULE_ALIAS("hid:b0003g*v000005ACp00000259");
MODULE_ALIAS("hid:b0003g*v000005ACp0000025A");
MODULE_ALIAS("hid:b0003g*v000005ACp0000025B");
MODULE_ALIAS("hid:b0003g*v000005ACp00000290");
MODULE_ALIAS("hid:b0003g*v000005ACp00000291");
MODULE_ALIAS("hid:b0003g*v000005ACp00000292");
MODULE_ALIAS("hid:b0003g*v000005ACp00000272");
MODULE_ALIAS("hid:b0003g*v000005ACp00000273");
MODULE_ALIAS("hid:b0003g*v000005ACp00000274");
MODULE_ALIAS("hid:b0005g*v000005ACp00000239");
MODULE_ALIAS("hid:b0005g*v000005ACp0000023A");
MODULE_ALIAS("hid:b0005g*v000005ACp0000023B");
MODULE_ALIAS("hid:b0003g*v000005ACp0000030A");
MODULE_ALIAS("hid:b0003g*v000005ACp0000030B");

MODULE_INFO(srcversion, "D992CFBB02BE5999B53CCC6");