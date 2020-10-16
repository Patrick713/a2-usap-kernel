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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x45a9cd1e, "tpm1_getcap" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x2bfbac43, "tpm2_probe" },
	{ 0x86dbf1e, "freezing_slow_path" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc5643ae9, "tpmm_chip_alloc" },
	{ 0x24b9136f, "tpm_get_timeouts" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x59d8c78b, "tpm_chip_stop" },
	{ 0x15155e94, "tpm_chip_register" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4fb45f83, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd18e281f, "tpm_calc_ordinal_duration" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x336c651f, "tpm2_get_tpm_pt" },
	{ 0xedc03953, "iounmap" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5020e987, "tpm_chip_start" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "tpm");


MODULE_INFO(srcversion, "ED4B0C02326BF4EF253E94C");
