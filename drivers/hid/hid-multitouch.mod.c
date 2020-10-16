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
	{ 0x2f357d74, "hid_unregister_driver" },
	{ 0x84ead130, "__hid_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x643feb7f, "input_set_capability" },
	{ 0xf63fc023, "sysfs_create_group" },
	{ 0xf4e9c026, "hid_hw_start" },
	{ 0xa219a88d, "hid_open_report" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5c8bdf32, "__hid_request" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa152e27b, "input_mt_get_slot_by_key" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4bbddbca, "hid_hw_stop" },
	{ 0xa4040d67, "sysfs_remove_group" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x724b676, "input_alloc_absinfo" },
	{ 0x6e6d6430, "hidinput_calc_abs_res" },
	{ 0x297acc01, "input_set_abs_params" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x97255bdf, "strlen" },
	{ 0x5b3e02e5, "input_mt_init_slots" },
	{ 0x7e968afc, "devm_kfree" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x58f6d9ef, "hid_report_raw_event" },
	{ 0xe816fde9, "hid_alloc_report_buf" },
	{ 0x4209d0f9, "input_mt_sync_frame" },
	{ 0x2866f6d0, "input_mt_report_slot_state" },
	{ 0x38ea3b28, "input_event" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g0002v00000596p00000500");
MODULE_ALIAS("hid:b0003g0002v00000596p00000502");
MODULE_ALIAS("hid:b0003g0002v00000596p00000506");
MODULE_ALIAS("hid:b0018g0004v0000044Ep0000121F");
MODULE_ALIAS("hid:b0018g0004v0000044Ep00001220");
MODULE_ALIAS("hid:b0018g0004v0000044Ep00001222");
MODULE_ALIAS("hid:b0003g0004v000017EFp000060A3");
MODULE_ALIAS("hid:b0003g0004v000017EFp000060B5");
MODULE_ALIAS("hid:b0003g0002v00001130p00003101");
MODULE_ALIAS("hid:b0003g0004v00000B05p0000184A");
MODULE_ALIAS("hid:b0003g0002v000003EBp00002118");
MODULE_ALIAS("hid:b0003g0002v00002453p00000100");
MODULE_ALIAS("hid:b0003g0002v00002087p00000A01");
MODULE_ALIAS("hid:b0003g0002v00002087p00000F01");
MODULE_ALIAS("hid:b0003g0002v00002247p00000001");
MODULE_ALIAS("hid:b0018g0004v00000488p0000121F");
MODULE_ALIAS("hid:b0003g0002v000024B8p00000020");
MODULE_ALIAS("hid:b0003g0002v000024B8p00000040");
MODULE_ALIAS("hid:b0003g0002v00001FF7p00000013");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000480D");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000480E");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007207");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000720C");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007224");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000722A");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000725E");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007262");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000726B");
MODULE_ALIAS("hid:b0003g0002v00000EEFp000072A1");
MODULE_ALIAS("hid:b0003g0002v00000EEFp000072AA");
MODULE_ALIAS("hid:b0003g*v00000EEFp000072C4");
MODULE_ALIAS("hid:b0003g*v00000EEFp000072D0");
MODULE_ALIAS("hid:b0003g0002v00000EEFp000072FA");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007302");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007349");
MODULE_ALIAS("hid:b0003g0002v00000EEFp000073F7");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000A001");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000C002");
MODULE_ALIAS("hid:b0018g0004v000004F3p0000313A");
MODULE_ALIAS("hid:b0003g0002v000003FCp000005D8");
MODULE_ALIAS("hid:b0003g0002v000025B5p00000002");
MODULE_ALIAS("hid:b0003g0002v000010C4p000081B9");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000003");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000100");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000101");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000102");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000106");
MODULE_ALIAS("hid:b0003g0002v00000DFCp0000010A");
MODULE_ALIAS("hid:b0003g0002v00000DFCp0000E100");
MODULE_ALIAS("hid:b0005g0002v000025B6p00000002");
MODULE_ALIAS("hid:b0003g0002v00001AADp0000000F");
MODULE_ALIAS("hid:b0003g0002v000022EDp00001010");
MODULE_ALIAS("hid:b0003g0002v0000222Ap00000001");
MODULE_ALIAS("hid:b0003g*v00001FD2p00006007");
MODULE_ALIAS("hid:b0018g0001v00001FD2p00007010");
MODULE_ALIAS("hid:b0003g0002v00000486p00000185");
MODULE_ALIAS("hid:b0003g0002v00000486p00000186");
MODULE_ALIAS("hid:b0003g0002v0000062Ap00007100");
MODULE_ALIAS("hid:b0003g0002v00000603p00000600");
MODULE_ALIAS("hid:b0018g0004v00001B96p00001B05");
MODULE_ALIAS("hid:b0003g0002v000004DAp00001044");
MODULE_ALIAS("hid:b0003g0002v000004DAp0000104D");
MODULE_ALIAS("hid:b0003g0002v0000093Ap00008001");
MODULE_ALIAS("hid:b0003g0002v0000093Ap00008002");
MODULE_ALIAS("hid:b0003g0002v0000093Ap00008003");
MODULE_ALIAS("hid:b0003g0002v00002087p00000703");
MODULE_ALIAS("hid:b0003g0002v00000408p00003001");
MODULE_ALIAS("hid:b0018g0004v000006CBp00008323");
MODULE_ALIAS("hid:b0003g0002v00000B8Cp00000092");
MODULE_ALIAS("hid:b0003g0002v00000483p00003261");
MODULE_ALIAS("hid:b0018g0004v000006CBp0000CE08");
MODULE_ALIAS("hid:b0003g0002v00001784p00000016");
MODULE_ALIAS("hid:b0003g0002v00001E5Ep00000313");
MODULE_ALIAS("hid:b0003g0002v0000227Dp00000709");
MODULE_ALIAS("hid:b0003g0002v0000227Dp00000A19");
MODULE_ALIAS("hid:b0003g0002v00000306p0000FF3F");
MODULE_ALIAS("hid:b0003g0002v00000FB8p00001109");
MODULE_ALIAS("hid:b0003g0002v00002505p00000220");
MODULE_ALIAS("hid:b0003g0002v00001477p00001006");
MODULE_ALIAS("hid:b0003g0002v00001477p00001007");
MODULE_ALIAS("hid:b0003g0002v00001477p0000100E");
MODULE_ALIAS("hid:b0003g0002v00001477p00001021");
MODULE_ALIAS("hid:b0003g0002v00001477p00001023");
MODULE_ALIAS("hid:b0003g0002v00001477p00001022");
MODULE_ALIAS("hid:b0003g0002v00001477p00001024");
MODULE_ALIAS("hid:b0003g0002v00001477p00001026");
MODULE_ALIAS("hid:b0003g0002v00001477p00001025");
MODULE_ALIAS("hid:b*g*v000018D1p00005028");
MODULE_ALIAS("hid:b*g0002v*p*");
MODULE_ALIAS("hid:b*g0004v*p*");

MODULE_INFO(srcversion, "43E560763A23B709BA9B10D");
