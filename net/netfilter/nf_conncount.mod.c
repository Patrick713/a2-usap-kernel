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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2680385, "kmem_cache_destroy" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x20e1a7dd, "nf_ct_netns_put" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xece784c2, "rb_first" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xbb9f1908, "kmem_cache_free" },
	{ 0x4007496c, "kmem_cache_alloc" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4c0e8130, "kmem_cache_create" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd8ba03c2, "nf_ct_netns_get" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb5b04fd7, "nf_conntrack_find_get" },
	{ 0x9a717656, "__do_once_done" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "DD36360A09D7B7EE4E5B979");
