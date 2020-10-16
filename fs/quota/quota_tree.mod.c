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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x37cc1f05, "init_user_ns" },
	{ 0xf828b0ef, "percpu_counter_add_batch" },
	{ 0x2e43d7c1, "make_kgid" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x493b2e9c, "__quota_error" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x8b46e7a4, "dqstats" },
	{ 0xb8886e84, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe4eaab70, "make_kprojid" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x451493d5, "mark_info_dirty" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x7ce18c9f, "from_kqid" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A768E9352AEC6D8D697FCC0");
