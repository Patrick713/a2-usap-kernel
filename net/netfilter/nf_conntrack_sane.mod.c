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
	{ 0x36138fcf, "param_array_ops" },
	{ 0xe1bf6b5b, "param_ops_ushort" },
	{ 0xc5850110, "printk" },
	{ 0x97a2cafb, "nf_conntrack_helpers_register" },
	{ 0xdc28d1dc, "nf_ct_helper_init" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x55f9e831, "nf_conntrack_helpers_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xef399fa8, "nf_ct_helper_log" },
	{ 0xcb28fe43, "nf_ct_expect_put" },
	{ 0x8525bff4, "nf_ct_expect_related_report" },
	{ 0x4a3bee79, "nf_ct_expect_init" },
	{ 0xc1769b54, "nf_ct_expect_alloc" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "C9D461C8140818DAE8609B0");