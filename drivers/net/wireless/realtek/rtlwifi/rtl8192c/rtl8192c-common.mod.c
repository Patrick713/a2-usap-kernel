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
	{ 0x2e5382f9, "rtl_fill_dummy" },
	{ 0xb82240c1, "rtl_dm_diginit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x57e85e1c, "_rtl_dbg_trace" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x7a0ac421, "rtl_fw_page_write" },
	{ 0x61fb1747, "_rtl_dbg_print_data" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xe96c779e, "rtl_cmd_send_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x331defd1, "rtl_fw_block_write" },
	{ 0xeab3fd69, "skb_put" },
};

MODULE_INFO(depends, "rtlwifi");


MODULE_INFO(srcversion, "8457E233D8A4F63288B1621");
